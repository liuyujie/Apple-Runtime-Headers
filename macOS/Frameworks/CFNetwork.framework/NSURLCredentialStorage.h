//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSURLCredentialStorageInternal;

@interface NSURLCredentialStorage : NSObject
{
    NSURLCredentialStorageInternal *_internal;
}

+ (id)sharedCredentialStorage;
- (void)setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2 task:(id)arg3;
- (void)getDefaultCredentialForProtectionSpace:(id)arg1 task:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2 options:(id)arg3 task:(id)arg4;
- (void)setCredential:(id)arg1 forProtectionSpace:(id)arg2 task:(id)arg3;
- (void)getCredentialsForProtectionSpace:(id)arg1 task:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (id)defaultCredentialForProtectionSpace:(id)arg1;
- (void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2 options:(id)arg3;
- (void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)setCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (id)_allCredentialsWithAccessControlGroup:(id)arg1 includeLegacyKeychain:(_Bool)arg2;
@property(readonly, copy) NSDictionary *allCredentials;
- (id)__allCredentialsWithAccessControlGroup:(id)arg1 includeLegacyKeychain:(_Bool)arg2;
- (id)credentialsForProtectionSpace:(id)arg1;
@property(nonatomic) BOOL _useSystemKeychain;
- (struct _CFURLCredentialStorage *)_CFURLCredentialStorage;
- (id)_initWithCFURLCredentialStorage:(struct _CFURLCredentialStorage *)arg1;
- (id)init;
- (void)dealloc;
- (id)_initWithIdentifier:(id)arg1 private:(_Bool)arg2;

@end
