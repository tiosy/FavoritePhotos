//
//  Photo.h
//  FavoritePhotos
//
//  Created by tim on 3/29/15.
//  Copyright (c) 2015 Timothy Yeh. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Photo : NSObject


@property NSString *photoURL;
@property NSArray *tags;
@property double latitude;
@property double longitude;
@property NSString *username;


-(instancetype)initWithDictionary:(NSDictionary *) dic;


@end



// Sample JSON data from instagram

//"data":  [
//          {
//              "attribution": null,
//              "videos":  {
//                  "low_bandwidth":  {
//                      "url": "https://scontent.cdninstagram.com/hphotos-xaf1/t50.2886-16/11089455_1421153718188145_1097113034_s.mp4",
//                      "width": 480,
//                      "height": 480
//                  },
//                  "standard_resolution":  {
//                      "url": "https://scontent.cdninstagram.com/hphotos-xfa1/t50.2886-16/11097662_669953103109525_1099386713_n.mp4",
//                      "width": 640,
//                      "height": 640
//                  },
//                  "low_resolution":  {
//                      "url": "https://scontent.cdninstagram.com/hphotos-xaf1/t50.2886-16/11089455_1421153718188145_1097113034_s.mp4",
//                      "width": 480,
//                      "height": 480
//                  }
//              },
//              "tags":  [
//                        "blueangels"
//                        ],
//              "type": "video",
//              "location":  {
//                  "latitude": 33.220555556,
//                  "name": "Tuscaloosa Regional Airport",
//                  "longitude": -87.611388889,
//                  "id": 250908438
//              },
//              "comments":  {
//                  "count": 0,
//                  "data":  []
//              },
//              "filter": "Normal",
//              "created_time": "1427670133",
//              "link": "https://instagram.com/p/01E6oPiX0m/",
//              "likes":  {
//                  "count": 0,
//                  "data":  []
//              },
//              "images":  {
//                  "low_resolution":  {
//                      "url": "https://scontent.cdninstagram.com/hphotos-xaf1/t51.2885-15/s306x306/e15/10956717_438817066275056_1330342803_n.jpg",
//                      "width": 306,
//                      "height": 306
//                  },
//                  "thumbnail":  {
//                      "url": "https://scontent.cdninstagram.com/hphotos-xaf1/t51.2885-15/s150x150/e15/10956717_438817066275056_1330342803_n.jpg",
//                      "width": 150,
//                      "height": 150
//                  },
//                  "standard_resolution":  {
//                      "url": "https://scontent.cdninstagram.com/hphotos-xaf1/t51.2885-15/e15/10956717_438817066275056_1330342803_n.jpg",
//                      "width": 640,
//                      "height": 640
//                  }
//              },
//              "users_in_photo":  [],
//              "caption":  {},
//              "user_has_liked": false,
//              "id": "951688517384764710_4930606",
//              "user":  {
//                  "username": "elliottdevore",
//                  "profile_picture": "https://instagramimages-a.akamaihd.net/profiles/profile_4930606_75sq_1339706070.jpg",
//                  "id": "4930606",
//                  "full_name": "Elliott DeVore"
//              }
//          },
