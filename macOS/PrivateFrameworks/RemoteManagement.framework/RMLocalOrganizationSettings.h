//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RemoteManagement/RMCoreOrganizationSettings.h>

@class NSString, RMLocalOrganization;

@interface RMLocalOrganizationSettings : RMCoreOrganizationSettings
{
}

@property(copy, nonatomic) NSString *passcode; // @dynamic passcode;
- (id)dictionaryRepresentation;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1;
- (id)computeUniqueIdentifier;

// Remaining properties
@property(retain, nonatomic) RMLocalOrganization *organization; // @dynamic organization;

@end

