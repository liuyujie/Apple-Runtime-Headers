//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSUserAgentBundleInfo : NSObject
{
    NSString *_identifier;
    NSString *_clientName;
    NSString *_clientVersion;
    NSDictionary *_infoPlist;
}

+ (id)_infoWithIdentifier:(id)arg1 clientName:(id)arg2 clientVersion:(id)arg3;
+ (id)_infoWithIdentifier:(id)arg1 clientName:(id)arg2;
+ (id)infoForIdentifier:(id)arg1;
@property(readonly, nonatomic) NSDictionary *infoPlist; // @synthesize infoPlist=_infoPlist;
@property(readonly, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(readonly, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)_clientVersionFromIdentifier:(id)arg1 clientName:(id)arg2 infoPlist:(id)arg3 preferredVersion:(id)arg4;
- (id)_clientNameFromIdentifier:(id)arg1 infoPlist:(id)arg2 preferredClientName:(id)arg3;
- (id)_infoPlistFromIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 preferredClientName:(id)arg2 preferredClientVersion:(id)arg3;

@end

