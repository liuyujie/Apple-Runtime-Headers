//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSUUID;

@interface HMFMessageDestination : HMFObject
{
    NSUUID *_target;
}

+ (id)shortDescription;
+ (id)allMessageDestinations;
@property(readonly, copy, nonatomic) NSUUID *target; // @synthesize target=_target;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)shortDescription;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTarget:(id)arg1;
- (id)init;

@end

