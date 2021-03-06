//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class PDScheduledActivityCriteria;

@interface PDScheduledActivityRegistration : NSObject <NSSecureCoding>
{
    PDScheduledActivityCriteria *_activityCriteria;
    id <NSObject><NSSecureCoding> _activityContext;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) id <NSObject><NSSecureCoding> activityContext; // @synthesize activityContext=_activityContext;
@property(readonly, nonatomic) PDScheduledActivityCriteria *activityCriteria; // @synthesize activityCriteria=_activityCriteria;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToScheduledActivityRegistration:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)initWithActivityCriteria:(id)arg1 activityContext:(id)arg2;

@end

