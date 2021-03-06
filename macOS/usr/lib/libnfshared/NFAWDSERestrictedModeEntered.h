//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NFAWDEventProtocol.h"

@class AWDNFCSERestrictedModeEnteredEvent, NSData, NSString;

@interface NFAWDSERestrictedModeEntered : NSObject <NFAWDEventProtocol>
{
    unsigned int _hardwareType;
    AWDNFCSERestrictedModeEnteredEvent *_metric;
}

@property(retain, nonatomic) AWDNFCSERestrictedModeEnteredEvent *metric; // @synthesize metric=_metric;
@property(nonatomic) unsigned int hardwareType; // @synthesize hardwareType=_hardwareType;
- (id)getMetric;
- (unsigned int)getMetricId;
@property(retain, nonatomic) NSData *attackLog;
@property(retain, nonatomic) NSString *platformIdentifier;
@property(retain, nonatomic) NSData *restrictedModeID;
@property(nonatomic) BOOL contactlessMode;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

