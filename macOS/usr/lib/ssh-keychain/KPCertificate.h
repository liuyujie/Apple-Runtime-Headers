//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface KPCertificate : NSObject
{
    id _privateKey;
    id _privateKeyAcl;
    NSData *_modulus;
    NSData *_exponent;
    NSData *_objId;
}

@property(retain) NSData *objId; // @synthesize objId=_objId;
@property(retain) NSData *exponent; // @synthesize exponent=_exponent;
@property(retain) NSData *modulus; // @synthesize modulus=_modulus;
@property(retain) id privateKeyAcl; // @synthesize privateKeyAcl=_privateKeyAcl;
@property(retain) id privateKey; // @synthesize privateKey=_privateKey;
- (void).cxx_destruct;

@end

