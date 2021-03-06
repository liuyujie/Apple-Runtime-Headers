//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface INActivity : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_activityType;
    NSArray *_activityDescriptors;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy) NSArray *activityDescriptors; // @synthesize activityDescriptors=_activityDescriptors;
@property(readonly, copy) NSString *activityType; // @synthesize activityType=_activityType;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithActivityType:(id)arg1 activityDescriptors:(id)arg2;

@end

