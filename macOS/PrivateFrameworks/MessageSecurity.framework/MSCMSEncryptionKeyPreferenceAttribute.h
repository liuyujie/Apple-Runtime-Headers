//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSCMSAttributeCoder.h"

__attribute__((visibility("hidden")))
@interface MSCMSEncryptionKeyPreferenceAttribute : NSObject <MSCMSAttributeCoder>
{
    struct OpaqueSecCertificateRef *_encryptionCertificate;
}

@property(readonly) struct OpaqueSecCertificateRef *encryptionCertificate; // @synthesize encryptionCertificate=_encryptionCertificate;
- (void)dealloc;
- (id)encodeAttributeWithError:(id *)arg1;
- (id)initWithEmailAddress:(id)arg1;
- (id)initWithIdentity:(struct OpaqueSecIdentityRef *)arg1;
- (id)initWithCertificate:(struct OpaqueSecCertificateRef *)arg1;
- (id)initWithAttribute:(id)arg1 error:(id *)arg2;

@end
