//
//  MasterViewController.h
//  w4d3-demo
//
//  Created by Roland Tecson on 2017-10-24.
//  Copyright © 2017 Roland Tecson. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "Meal+CoreDataClass.h"

@class DetailViewController;

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) DetailViewController *detailViewController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end

