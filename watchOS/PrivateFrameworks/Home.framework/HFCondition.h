//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NAEquatable.h"

@class NSPredicate, NSString;

@interface HFCondition : NSObject <NAEquatable>
{
    NSPredicate *_predicate;
}

+ (Class)homeKitRepresentationClass;
@property(readonly, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPredicate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

