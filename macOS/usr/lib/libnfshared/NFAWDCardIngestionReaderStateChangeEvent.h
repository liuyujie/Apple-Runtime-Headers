//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NFAWDEventProtocol.h"

@class AWDNFCCardIngestionReaderStateChangeEvent, NSString;

@interface NFAWDCardIngestionReaderStateChangeEvent : NSObject <NFAWDEventProtocol>
{
    AWDNFCCardIngestionReaderStateChangeEvent *_metric;
}

@property(retain, nonatomic) AWDNFCCardIngestionReaderStateChangeEvent *metric; // @synthesize metric=_metric;
- (id)getMetric;
- (unsigned int)getMetricId;
- (void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2;
@property(nonatomic) unsigned int errorCode;
@property(nonatomic) unsigned int type;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

