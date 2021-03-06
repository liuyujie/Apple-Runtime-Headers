//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NFAWDEventProtocol.h"

@class AWDNFCMiddlewareExceptionEvent, NSData, NSString;

@interface NFAWDMiddlewareException : NSObject <NFAWDEventProtocol>
{
    unsigned int _version;
    unsigned int _hardwareType;
    unsigned int _type;
    unsigned int _errorCode;
    AWDNFCMiddlewareExceptionEvent *_metric;
}

@property(retain, nonatomic) AWDNFCMiddlewareExceptionEvent *metric; // @synthesize metric=_metric;
@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int hardwareType; // @synthesize hardwareType=_hardwareType;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)updateExceptionUUID:(id)arg1;
- (id)getMetric;
- (unsigned int)getMetricId;
@property(retain, nonatomic) NSData *breadcrumb;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

