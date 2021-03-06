//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNTracePlayerTimelineStreamObjectType.h"

@class NSString;

@interface MNTraceHeadingDataRow : NSObject <MNTracePlayerTimelineStreamObjectType>
{
    double _timestamp;
    double _trueHeading;
    double _magneticHeading;
    double _headingAccuracy;
}

@property(nonatomic) double headingAccuracy; // @synthesize headingAccuracy=_headingAccuracy;
@property(nonatomic) double magneticHeading; // @synthesize magneticHeading=_magneticHeading;
@property(nonatomic) double trueHeading; // @synthesize trueHeading=_trueHeading;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) double position;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

