//
//  DetailViewController.h
//  Sea
//
//  Created by Ho, Derrick on 6/6/16.
//  Copyright © 2016 Ho, Derrick. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

