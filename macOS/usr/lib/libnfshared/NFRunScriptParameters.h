//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface NFRunScriptParameters : NSObject <NSSecureCoding>
{
    BOOL _checkWhitelist;
    BOOL _initialSelectBeforeRun;
    BOOL _includeAPDUDuration;
    BOOL _deactivateAllApps;
    NSString *_seid;
    NSArray *_whitelistedAID;
    double _outTotalAPDUExecutionDuration;
    unsigned long long _outFinalSWStatus;
}

+ (BOOL)supportsSecureCoding;
@property unsigned long long outFinalSWStatus; // @synthesize outFinalSWStatus=_outFinalSWStatus;
@property double outTotalAPDUExecutionDuration; // @synthesize outTotalAPDUExecutionDuration=_outTotalAPDUExecutionDuration;
@property BOOL deactivateAllApps; // @synthesize deactivateAllApps=_deactivateAllApps;
@property BOOL includeAPDUDuration; // @synthesize includeAPDUDuration=_includeAPDUDuration;
@property BOOL initialSelectBeforeRun; // @synthesize initialSelectBeforeRun=_initialSelectBeforeRun;
@property(retain) NSArray *whitelistedAID; // @synthesize whitelistedAID=_whitelistedAID;
@property BOOL checkWhitelist; // @synthesize checkWhitelist=_checkWhitelist;
@property(retain) NSString *seid; // @synthesize seid=_seid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end

