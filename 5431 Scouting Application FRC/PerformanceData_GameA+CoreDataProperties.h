//
//  PerformanceData_GameA+CoreDataProperties.h
//  5431 Scouting Application FRC
//
//  Created by learner on 2/11/16.
//  Copyright © 2016 Titian Robotics. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "PerformanceData_GameA.h"

NS_ASSUME_NONNULL_BEGIN

@interface PerformanceData_GameA (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *a_boulder_start;
@property (nullable, nonatomic, retain) NSString *a_defense_reached;
@property (nullable, nonatomic, retain) NSNumber *a_crossed_defenses;
@property (nullable, nonatomic, retain) NSNumber *a_lowgoal_score;
@property (nullable, nonatomic, retain) NSNumber *a_highgoal_score;

@end

NS_ASSUME_NONNULL_END
