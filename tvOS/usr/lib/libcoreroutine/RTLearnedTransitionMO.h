//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <coreroutine/RTCloudManagedObject.h>

@class NSDate, NSNumber, RTLearnedVisitMO;

@interface RTLearnedTransitionMO : RTCloudManagedObject
{
}

+ (id)managedObjectWithTransition:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)fetchRequest;

// Remaining properties
@property(retain, nonatomic) RTLearnedVisitMO *destination; // @dynamic destination;
@property(retain, nonatomic) RTLearnedVisitMO *origin; // @dynamic origin;
@property(copy, nonatomic) NSNumber *predominantMotionActivityType; // @dynamic predominantMotionActivityType;
@property(copy, nonatomic) NSDate *startDate; // @dynamic startDate;
@property(copy, nonatomic) NSDate *stopDate; // @dynamic stopDate;

@end

