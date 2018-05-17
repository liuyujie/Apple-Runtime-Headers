//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSDictionary, NSString;

@interface DMFProfile : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isManaged;
    _Bool _isLocked;
    _Bool _hasRemovalPasscode;
    _Bool _isEncrypted;
    NSString *_UUID;
    unsigned int _type;
    NSString *_identifier;
    int _profileVersion;
    NSString *_displayName;
    NSString *_organization;
    NSString *_profileDescription;
    NSArray *_signerCertificates;
    NSArray *_payloads;
    NSDictionary *_restrictions;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDictionary *restrictions; // @synthesize restrictions=_restrictions;
@property(readonly, copy, nonatomic) NSArray *payloads; // @synthesize payloads=_payloads;
@property(readonly, copy, nonatomic) NSArray *signerCertificates; // @synthesize signerCertificates=_signerCertificates;
@property(readonly, nonatomic) _Bool isEncrypted; // @synthesize isEncrypted=_isEncrypted;
@property(readonly, nonatomic) _Bool hasRemovalPasscode; // @synthesize hasRemovalPasscode=_hasRemovalPasscode;
@property(readonly, nonatomic) _Bool isLocked; // @synthesize isLocked=_isLocked;
@property(readonly, nonatomic) _Bool isManaged; // @synthesize isManaged=_isManaged;
@property(readonly, copy, nonatomic) NSString *profileDescription; // @synthesize profileDescription=_profileDescription;
@property(readonly, copy, nonatomic) NSString *organization; // @synthesize organization=_organization;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) int profileVersion; // @synthesize profileVersion=_profileVersion;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUUID:(id)arg1 type:(unsigned int)arg2 identifier:(id)arg3 profileVersion:(int)arg4 displayName:(id)arg5 organization:(id)arg6 profileDescription:(id)arg7 isManaged:(_Bool)arg8 isLocked:(_Bool)arg9 hasRemovalPasscode:(_Bool)arg10 isEncrypted:(_Bool)arg11 signerCertificates:(id)arg12 payloads:(id)arg13 restrictions:(id)arg14;

@end
