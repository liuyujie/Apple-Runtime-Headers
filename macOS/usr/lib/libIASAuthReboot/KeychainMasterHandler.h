//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface KeychainMasterHandler : NSObject
{
    struct OpaqueSecKeychainRef *_keychainRef;
    long long _moduleHandle;
    int _errorStatus;
    NSString *_errorString;
}

- (BOOL)_checkStatus:(int)arg1 context:(id)arg2;
- (BOOL)prepareKeychainWithMasterKeyCredential:(id)arg1;
- (BOOL)prepareKeychainWithPasswordCredential:(id)arg1;
- (id)extractMasterKey;
- (id)errorString;
- (int)errorStatus;
- (void)dealloc;
- (id)initWithKeychain:(struct OpaqueSecKeychainRef *)arg1;

@end

