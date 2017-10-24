//
//  Meal+CoreDataProperties.m
//  w4d3-demo
//
//  Created by Roland Tecson on 2017-10-24.
//  Copyright © 2017 Roland Tecson. All rights reserved.
//
//

#import "Meal+CoreDataProperties.h"

@implementation Meal (CoreDataProperties)

+ (NSFetchRequest<Meal *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"Meal"];
}

@dynamic calories;
@dynamic name;

@end
