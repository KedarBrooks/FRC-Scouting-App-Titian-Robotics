//
//  Team+CoreDataProperties.h
//  5431 Scouting Application FRC
//
//  Created by learner on 2/11/16.
//  Copyright © 2016 Titian Robotics. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Team.h"

NS_ASSUME_NONNULL_BEGIN

@interface Team (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *robot_type;
@property (nullable, nonatomic, retain) NSString *team_bio;
@property (nullable, nonatomic, retain) NSString *team_name;
@property (nullable, nonatomic, retain) NSNumber *team_type;
@property (nullable, nonatomic, retain) PerformanceData_GameP *pData;
@property (nullable, nonatomic, retain) PerformanceData_GameF *fData;
@property (nullable, nonatomic, retain) PerformanceData_GameA *aData;

@end

NS_ASSUME_NONNULL_END
