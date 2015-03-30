//
//  Photo.m
//  FavoritePhotos
//
//  Created by tim on 3/29/15.
//  Copyright (c) 2015 Timothy Yeh. All rights reserved.
//

#import "Photo.h"

@implementation Photo

-(instancetype) initWithDictionary:(NSDictionary *)dic
{
    self = [super init];
    self.photoURL = [[[dic objectForKey:@"images"] objectForKey:@"standard_resolution"] objectForKey:@"url"];
    self.tags= [dic objectForKey:@"tags"];
    self.latitude = [[[dic objectForKey:@"locations"] objectForKey:@"latitude"] doubleValue];
    self.longitude = [[[dic objectForKey:@"locations"] objectForKey:@"longitude"] doubleValue];
    self.username= [[dic objectForKey:@"user"] objectForKey:@"username"];


    return self;
}


@end
