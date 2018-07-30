//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSExtensionContext.h"

#import "DOCRemoteContextInterface.h"

@interface DOCRemoteContext : NSExtensionContext <DOCRemoteContextInterface>
{
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
- (void)fetchAllSourcesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateEditingTo:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateAppearance:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)updateAppearance:(id)arg1 shouldFlushCA:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)serviceProxyWithErrorHandler:(CDUnknownBlockType)arg1;

@end
