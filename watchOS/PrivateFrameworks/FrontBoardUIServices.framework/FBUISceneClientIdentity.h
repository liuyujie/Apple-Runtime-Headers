//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface FBUISceneClientIdentity : NSObject <NSCopying>
{
    NSString *_identifier;
    NSString *_applicationBundleID;
}

@property(copy, nonatomic) NSString *applicationBundleID; // @synthesize applicationBundleID=_applicationBundleID;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;

@end

