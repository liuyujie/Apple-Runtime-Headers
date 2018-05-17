//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SFSigningOperation.h"

@class NSString, _SFRSAKeySpecifier;

__attribute__((visibility("hidden")))
@interface SFRSASigningOperation : NSObject <SFSigningOperation>
{
    id _rsaSigningOperationInternal;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) id <SFDigestOperation> digestOperation;
@property(copy, nonatomic) _SFRSAKeySpecifier *signingKeySpecifier;
- (id)verify:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
- (id)sign:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeySpecifier:(id)arg1 digestOperation:(id)arg2;
- (id)initWithKeySpecifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
