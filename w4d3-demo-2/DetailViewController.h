//
//  DetailViewController.h
//  w4d3-demo
//
//  Created by Roland Tecson on 2017-10-24.
//  Copyright © 2017 Roland Tecson. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Meal+CoreDataClass.h"

@interface DetailViewController : UIViewController

// IBOutlets
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

// Public properties
@property (strong, nonatomic) Meal *detailItem;

@end

