//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, SALocation;

@interface SALocalSearchStartNavigation : SABaseClientBoundCommand
{
}

+ (id)startNavigationWithDictionary:(id)arg1 context:(id)arg2;
+ (id)startNavigation;
- (_Bool)requiresResponse;
@property(retain, nonatomic) SALocation *origin;
@property(copy, nonatomic) NSString *directionsType;
@property(retain, nonatomic) SALocation *destination;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

