//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray;

@interface HKCodedValueCollection : NSObject <NSSecureCoding, NSCopying>
{
    NSArray *_codedValues;
}

+ (_Bool)supportsSecureCoding;
+ (id)codedValueCollectionWithCodedValues:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *codedValues; // @synthesize codedValues=_codedValues;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCodedValues:(id)arg1;
- (id)init;

@end
