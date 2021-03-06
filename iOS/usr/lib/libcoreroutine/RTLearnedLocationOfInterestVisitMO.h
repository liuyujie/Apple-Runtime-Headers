//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSDate, NSNumber, NSUUID, RTLearnedLocationOfInterestMO;

@interface RTLearnedLocationOfInterestVisitMO : NSManagedObject
{
}

+ (id)managedObjectWithVisit:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)fetchRequest;

// Remaining properties
@property(copy, nonatomic) NSNumber *confidence; // @dynamic confidence;
@property(copy, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(copy, nonatomic) NSNumber *dataPointCount; // @dynamic dataPointCount;
@property(copy, nonatomic) NSDate *entryDate; // @dynamic entryDate;
@property(copy, nonatomic) NSDate *exitDate; // @dynamic exitDate;
@property(copy, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property(retain, nonatomic) NSUUID *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSNumber *locationLatitude; // @dynamic locationLatitude;
@property(copy, nonatomic) NSNumber *locationLongitude; // @dynamic locationLongitude;
@property(retain, nonatomic) RTLearnedLocationOfInterestMO *locationOfInterest; // @dynamic locationOfInterest;
@property(copy, nonatomic) NSNumber *locationOfInterestConfidence; // @dynamic locationOfInterestConfidence;
@property(copy, nonatomic) NSNumber *locationOfInterestSource; // @dynamic locationOfInterestSource;
@property(copy, nonatomic) NSNumber *locationReferenceFrame; // @dynamic locationReferenceFrame;
@property(copy, nonatomic) NSNumber *locationUncertainty; // @dynamic locationUncertainty;

@end

