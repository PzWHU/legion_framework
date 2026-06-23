from PIL import Image
import sys
import json
import os


def convert(f):
    im=Image.open(f)
    f_=f[:-4]+'.png'
    im.save(f_)
    return im.size

def gen_config(in_file,img_size):

    with open(in_file[:-5]+'.json','w+') as f_:
        data_dict = {}

        rect_sample = {
            'id':1,
            'type':'cleaning_area/virtual_wall/deceleration_area',
            'box':{
                "startX": 135.11111450195312,
                "startY": 280.2831115722656,
                "width": 100,
                "height": 100
            }
        }

        traj_sample = {
            'id':1,
            'name':'qqq',
            'type':'hand_draw/auto',
            'length':7,
            'poiints':[ [1.0, 1.0], [2.0, 2.0], [3.0, 3.0], [4.0, 4.0], [5.0, 5.0], [6.0, 6.0], [7.0, 7.0] ]
        }

        with open(in_file,"r+") as f:
            res = f.readlines()
            data_dict['name'] = map_name
            data_dict['type' = 2]
            data_dict[res[1].split(':')[0].strip()] = float(res[1].split(':')[1].strip())
            data_dict[res[2].split(':')[0].strip()] =  [float(item.strip()) for  item in res[2].split(':')[1].strip()[1:-2].split(',')]
            data_dict['start'] = [0.0, 0.0, 0.0]
            data_dict['length'] = img_size[0]
            data_dict['width'] = img_size[1]
            data_dict['area_list'] = []
            data_dict['track_list'] = []
        json.dump(data_dict, f_)
            

if __name__=='__main__':
    f=sys.argv[1]
    map_name = f.split('/')[0]
    in_file = f[:-4]+'.yaml'
    size = convert(f)
    gen_config(in_file,size)
    
    
    
