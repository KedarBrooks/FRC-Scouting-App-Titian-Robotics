//
//  PerformanceData_GameF+CoreDataProperties.h
//  5431 Scouting Application FRC
//
//  Created by learner on 2/11/16.
//  Copyright © 2016 Titian Robotics. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "PerformanceData_GameF.h"

NS_ASSUME_NONNULL_BEGIN

@interface PerformanceData_GameF (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *f_lowgoal_score;
@property (nullable, nonatomic, retain) NSNumber *f_challenged_towers;
@property (nullable, nonatomic, retain) NSNumber *f_boulder_pickup;
@property (nullable, nonatomic, retain) NSNumber *f_highgoal_fails;
@property (nullable, nonatomic, retain) NSNumber *f_highgoal_score;
@property (nullable, nonatomic, retain) NSNumber *f_climbingtower;
@property (nullable, nonatomic, retain) NSNumber *f_defensivepushing;
@property (nullable, nonatomic, retain) NSNumber *f_lowgoal_fails;

@end

NS_ASSUME_NONNULL_END
