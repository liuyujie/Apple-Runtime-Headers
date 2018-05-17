//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSExtensionContext.h"

#import "GEOMapDataPlugin.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOMapDataPluginContext : NSExtensionContext <GEOMapDataPlugin>
{
    id <GEOMapDataPluginContextDelegate> _pluginContextDelegate;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@property(nonatomic) __weak id <GEOMapDataPluginContextDelegate> pluginContextDelegate; // @synthesize pluginContextDelegate=_pluginContextDelegate;
- (void).cxx_destruct;
- (void)receiveEndpointRequest:(CDUnknownBlockType)arg1;
- (void)sendEndpointRequest:(CDUnknownBlockType)arg1;
- (void)remoteIsReadyNotification;
- (void)sendIsReadyNotification;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
