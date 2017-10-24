//
//  DetailViewController.m
//  w4d3-demo
//
//  Created by Roland Tecson on 2017-10-24.
//  Copyright © 2017 Roland Tecson. All rights reserved.
//

#import "DetailViewController.h"

@interface DetailViewController ()

@end

@implementation DetailViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    [self configureView];
}

// MARK: - Setter methods

- (void)setDetailItem:(Meal *)newDetailItem {
    if (_detailItem != newDetailItem) {
        _detailItem = newDetailItem;
        
        // Update the view.
        [self configureView];
    }
}

// MARK: - Private methods

- (void)configureView {
    // Update the user interface for the detail item.
    if (self.detailItem != nil) {
        self.detailDescriptionLabel.text = self.detailItem.name;
    }
}

@end
