//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TUCallCapabilitiesXPCServerActions.h"

@protocol TUCallCapabilitiesXPCServer <TUCallCapabilitiesXPCServerActions>
- (void)unregisterClient:(id <TUCallCapabilitiesXPCClient>)arg1;
- (void)registerClient:(id <TUCallCapabilitiesXPCClient>)arg1;
- (oneway void)callCapabilitiesState:(void (^)(TUCallCapabilitiesState *))arg1;
@end

