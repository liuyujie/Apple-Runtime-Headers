//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SADeviceMyriadConfiguration : SABaseClientBoundCommand
{
}

+ (id)deviceMyriadConfigurationWithDictionary:(id)arg1 context:(id)arg2;
+ (id)deviceMyriadConfiguration;
- (_Bool)requiresResponse;
@property(nonatomic) double deviceTrumpDelay;
@property(nonatomic) double deviceDelay;
@property(nonatomic) double deviceClass;
@property(nonatomic) double deviceAdjustment;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

