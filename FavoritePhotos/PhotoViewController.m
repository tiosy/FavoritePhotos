//
//  ViewController.m
//  FavoritePhotos
//
//  Created by tim on 3/29/15.
//  Copyright (c) 2015 Timothy Yeh. All rights reserved.
//

#import "PhotoViewController.h"
#import "Photo.h"

@interface PhotoViewController ()


@property NSMutableArray *photoArray; // for tableview (ALL)



@property Photo *photo;


@end

@implementation PhotoViewController

- (void)viewDidLoad {
    [super viewDidLoad];


    NSString *searchTagString = @"blueangels";
    [self pullPhotoDataFromAPI: searchTagString];



}


#pragma mark - helper methods

-(void) pullPhotoDataFromAPI: (NSString *) name
{
    NSString *nameTag = [name stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];
    NSString *string = [NSString stringWithFormat:@"https://api.instagram.com/v1/tags/%@/media/recent?access_token=1694814084.1fb234f.9cdc4f7f17ce4e38a286d81ce0f4c569",nameTag];

    NSURL *url = [NSURL URLWithString:string];
    NSURLRequest *request = [NSURLRequest requestWithURL:url];
    [NSURLConnection sendAsynchronousRequest:request queue:[NSOperationQueue mainQueue] completionHandler:
     ^(NSURLResponse *response, NSData *data, NSError *connectionError) {


         NSDictionary  *jsonDictionary = [NSJSONSerialization JSONObjectWithData:data options:NSJSONReadingAllowFragments error:nil];


         NSArray *jsonArray = [NSArray new];
         jsonArray = [jsonDictionary objectForKey:@"data"];

         self.photoArray = [NSMutableArray new];

         for (NSDictionary *dic in jsonArray) { //each of arrayJSON is a dictionary this case

             Photo *photo = [[Photo alloc] initWithDictionary:dic];
             [self.photoArray addObject: photo ];
             //each of photoArray is now a Photo object
         }




         //ok now dump the array
         for (Photo *photo in self.photoArray) {

             NSLog(@"==%@\n",photo.photoURL);
         }

         //since this Block, a async process, needs to reload tableview
         //[self.tableView reloadData];

     }
     ];
    
}


@end
