//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSString, RMCoreDevice, RMCoreUser;

@interface RMUserDeviceAddress : NSManagedObject
{
}

+ (id)fetchOrCreateUserDeviceAddressWithUser:(id)arg1 device:(id)arg2 context:(id)arg3 error:(id *)arg4;

// Remaining properties
@property(retain, nonatomic) RMCoreDevice *device; // @dynamic device;
@property(retain, nonatomic) NSString *idsURI; // @dynamic idsURI;
@property(retain, nonatomic) RMCoreUser *user; // @dynamic user;

@end

