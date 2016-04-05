//
//  PerformanceData_GameP+CoreDataProperties.h
//  5431 Scouting Application FRC
//
//  Created by learner on 2/11/16.
//  Copyright © 2016 Titian Robotics. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "PerformanceData_GameP.h"

NS_ASSUME_NONNULL_BEGIN

@interface PerformanceData_GameP (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *cheval_de_frise_score;
@property (nullable, nonatomic, retain) NSNumber *cheval_de_frise_speed;
@property (nullable, nonatomic, retain) NSNumber *drawbridge_score;
@property (nullable, nonatomic, retain) NSNumber *drawbridge_speed;
@property (nullable, nonatomic, retain) NSNumber *lowbar_score;
@property (nullable, nonatomic, retain) NSNumber *lowbar_speed;
@property (nullable, nonatomic, retain) NSNumber *moat_score;
@property (nullable, nonatomic, retain) NSNumber *moat_speed;
@property (nullable, nonatomic, retain) NSNumber *portcullis_score;
@property (nullable, nonatomic, retain) NSNumber *portcullis_speed;
@property (nullable, nonatomic, retain) NSNumber *ramparts_score;
@property (nullable, nonatomic, retain) NSNumber *ramparts_speed;
@property (nullable, nonatomic, retain) NSNumber *rockwall_score;
@property (nullable, nonatomic, retain) NSNumber *rockwall_speed;
@property (nullable, nonatomic, retain) NSNumber *rough_terrain_score;
@property (nullable, nonatomic, retain) NSNumber *rough_terrain_speed;
@property (nullable, nonatomic, retain) NSNumber *sallyport_score;
@property (nullable, nonatomic, retain) NSNumber *sallyport_speed;

@end

NS_ASSUME_NONNULL_END
