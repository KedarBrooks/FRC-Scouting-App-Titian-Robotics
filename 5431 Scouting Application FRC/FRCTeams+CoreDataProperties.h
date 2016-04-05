//
//  FRCTeams+CoreDataProperties.h
//  5431 Scouting Application FRC
//
//  Created by learner on 2/11/16.
//  Copyright © 2016 Titian Robotics. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "FRCTeams.h"

NS_ASSUME_NONNULL_BEGIN

@interface FRCTeams (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *logo_id;
@property (nullable, nonatomic, retain) NSString *team_number;
@property (nullable, nonatomic, retain) NSManagedObject *relationship;

@end

NS_ASSUME_NONNULL_END
