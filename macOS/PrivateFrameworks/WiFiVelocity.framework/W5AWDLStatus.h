//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSData, NSString;

@interface W5AWDLStatus : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _power;
    BOOL _isAWDLRealTimeMode;
    NSString *_interfaceName;
    NSArray *_ipv6Addresses;
    NSData *_awdlSyncEnabled;
    NSData *_awdlSyncState;
    NSData *_awdlSyncChannelSequence;
    NSData *_awdlStrategy;
    NSData *_awdlElectionParameters;
    NSData *_awdlMasterChannel;
    NSData *_awdlSecondaryMasterChannel;
    NSData *_awdlOpMode;
    NSData *_awdlSyncParameters;
    NSData *_awdlPeerDatabase;
    long long _airDropDiscoverableMode;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long airDropDiscoverableMode; // @synthesize airDropDiscoverableMode=_airDropDiscoverableMode;
@property(nonatomic) BOOL isAWDLRealTimeMode; // @synthesize isAWDLRealTimeMode=_isAWDLRealTimeMode;
@property(copy, nonatomic) NSData *awdlPeerDatabase; // @synthesize awdlPeerDatabase=_awdlPeerDatabase;
@property(copy, nonatomic) NSData *awdlSyncParameters; // @synthesize awdlSyncParameters=_awdlSyncParameters;
@property(copy, nonatomic) NSData *awdlOpMode; // @synthesize awdlOpMode=_awdlOpMode;
@property(copy, nonatomic) NSData *awdlSecondaryMasterChannel; // @synthesize awdlSecondaryMasterChannel=_awdlSecondaryMasterChannel;
@property(copy, nonatomic) NSData *awdlMasterChannel; // @synthesize awdlMasterChannel=_awdlMasterChannel;
@property(copy, nonatomic) NSData *awdlElectionParameters; // @synthesize awdlElectionParameters=_awdlElectionParameters;
@property(copy, nonatomic) NSData *awdlStrategy; // @synthesize awdlStrategy=_awdlStrategy;
@property(copy, nonatomic) NSData *awdlSyncChannelSequence; // @synthesize awdlSyncChannelSequence=_awdlSyncChannelSequence;
@property(copy, nonatomic) NSData *awdlSyncState; // @synthesize awdlSyncState=_awdlSyncState;
@property(copy, nonatomic) NSData *awdlSyncEnabled; // @synthesize awdlSyncEnabled=_awdlSyncEnabled;
@property(nonatomic) BOOL power; // @synthesize power=_power;
@property(copy, nonatomic) NSArray *ipv6Addresses; // @synthesize ipv6Addresses=_ipv6Addresses;
@property(copy, nonatomic) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAWDLStatus:(id)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)description;
- (void)dealloc;

@end

