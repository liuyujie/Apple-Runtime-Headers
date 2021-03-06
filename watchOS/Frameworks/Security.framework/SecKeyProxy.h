//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"

@class NSData, NSString, NSXPCListener, NSXPCListenerEndpoint;

@interface SecKeyProxy : NSObject <NSXPCListenerDelegate>
{
    id _key;
    NSData *_certificate;
    NSXPCListener *_listener;
}

+ (struct __SecIdentity *)createIdentityFromEndpoint:(id)arg1 error:(id *)arg2;
+     // Error parsing type: ^{__SecKey={__CFRuntimeBase=IAI}^{__SecKeyDescriptor}^v}16@0:4@8^@12, name: createKeyFromEndpoint:error:
+     // Error parsing type: ^{__SecKey={__CFRuntimeBase=IAI}^{__SecKeyDescriptor}^v}20@0:4@8^@12^@16, name: createItemFromEndpoint:certificate:error:
+     // Error parsing type: @16@0:4^{__SecKey={__CFRuntimeBase=IAI}^{__SecKeyDescriptor}^v}8^^{__CFError}12, name: targetForKey:error:
- (void).cxx_destruct;
@property(readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
- (void)dealloc;
- (void)invalidate;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithIdentity:(struct __SecIdentity *)arg1;
-     // Error parsing type: @12@0:4^{__SecKey={__CFRuntimeBase=IAI}^{__SecKeyDescriptor}^v}8, name: initWithKey:
-     // Error parsing type: @16@0:4^{__SecKey={__CFRuntimeBase=IAI}^{__SecKeyDescriptor}^v}8@12, name: initWithKey:certificate:

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

