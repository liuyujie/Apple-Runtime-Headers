//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "VNRequestRevisionProviding.h"
#import "VNSerializing.h"
#import "VNSerializingInternal.h"

@class VNMPImageDescriptor;

@interface VNImageprint : NSObject <VNSerializingInternal, NSCopying, NSSecureCoding, VNSerializing, VNRequestRevisionProviding>
{
    unsigned long long _requestRevision;
    unsigned long long _version;
    VNMPImageDescriptor *_descriptor;
    unsigned long long _type;
}

+ (BOOL)isSerializedImageprintCompatibleWithCurrentVersion:(id)arg1;
+ (unsigned long long)currentVersion;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) VNMPImageDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)serializeStateAndReturnError:(id *)arg1;
- (unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id *)arg3;
@property(readonly, nonatomic) unsigned long long serializedLength;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) unsigned long long requestRevision;
- (id)distanceToImageprint:(id)arg1 error:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithState:(id)arg1 error:(id *)arg2;
- (id)initWithState:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithImageDescriptor:(id)arg1 type:(unsigned long long)arg2 requestRevision:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;

@end

