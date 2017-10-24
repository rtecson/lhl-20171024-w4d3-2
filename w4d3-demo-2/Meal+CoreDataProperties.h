//
//  Meal+CoreDataProperties.h
//  w4d3-demo
//
//  Created by Roland Tecson on 2017-10-24.
//  Copyright © 2017 Roland Tecson. All rights reserved.
//
//

#import "Meal+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface Meal (CoreDataProperties)

+ (NSFetchRequest<Meal *> *)fetchRequest;

@property (nonatomic) int64_t calories;
@property (nullable, nonatomic, copy) NSString *name;

@end

NS_ASSUME_NONNULL_END
