//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAUTSPlayTrailer : SABaseClientBoundCommand
{
}

+ (id)playTrailerWithDictionary:(id)arg1 context:(id)arg2;
+ (id)playTrailer;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *utsId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

