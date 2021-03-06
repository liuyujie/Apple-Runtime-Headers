//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_PASZonedObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"

@class NSString, PPNamedEntity, PPSource;

@interface PPNamedEntityRecord : _PASZonedObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    PPNamedEntity *_entity;
    PPSource *_source;
    NSString *_extractionOsBuild;
    float _initialScore;
    float _decayRate;
    unsigned short _extractionAssetVersion;
    unsigned char _algorithm;
    unsigned char _changeType;
}

+ (id)describeChangeType:(unsigned char)arg1;
+ (id)describeAlgorithm:(unsigned int)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned char changeType; // @synthesize changeType=_changeType;
@property(readonly, nonatomic) NSString *extractionOsBuild; // @synthesize extractionOsBuild=_extractionOsBuild;
@property(readonly, nonatomic) PPSource *source; // @synthesize source=_source;
@property(readonly, nonatomic) PPNamedEntity *entity; // @synthesize entity=_entity;
- (void).cxx_destruct;
- (_Bool)isEqualToNamedEntityRecord:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
@property(readonly, nonatomic) unsigned int extractionAssetVersion;
@property(readonly, nonatomic) double decayRate;
@property(readonly, nonatomic) double initialScore;
@property(readonly, nonatomic) unsigned int algorithm;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

