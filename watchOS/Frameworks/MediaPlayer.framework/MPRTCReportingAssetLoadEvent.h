//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPRTCReportingEvent.h>

@class NSError, NSString;

@interface MPRTCReportingAssetLoadEvent : MPRTCReportingEvent
{
    NSError *_error;
    NSString *_siriSessionIdentifier;
    double _duration;
}

@property(copy, nonatomic) NSString *siriSessionIdentifier; // @synthesize siriSessionIdentifier=_siriSessionIdentifier;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (id)newRTCReportingPayloadDictionary;
- (unsigned short)rtcReportingType;
- (unsigned short)rtcReportingCategory;

@end

