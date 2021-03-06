//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSExtensionContext.h"

#import "NEExtensionProviderHostProtocol.h"
#import "NEExtensionProviderProtocol.h"

@class NEConfiguration, NSString;

@interface NEExtensionProviderContext : NSExtensionContext <NEExtensionProviderProtocol, NEExtensionProviderHostProtocol>
{
    id <NEExtensionProviderHostProtocol> _hostContext;
    NSString *_description;
    NEConfiguration *_configuration;
    CDUnknownBlockType _stopCompletionHandler;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@property(copy) CDUnknownBlockType stopCompletionHandler; // @synthesize stopCompletionHandler=_stopCompletionHandler;
@property(retain) NEConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopWithReason:(int)arg1;
- (void)startWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dispose;
- (void)displayMessage:(id)arg1 message:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startedWithError:(id)arg1;
- (void)cancelWithError:(id)arg1;
- (void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2 deviceIdentifier:(id)arg3;
- (void)wake;
- (void)sleepWithCompletionHandler:(CDUnknownBlockType)arg1;
- (int)neStopReasonToProviderStopReason:(int)arg1;
- (void)completeSession;
- (id)hostContext;
- (void)setDescription:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

