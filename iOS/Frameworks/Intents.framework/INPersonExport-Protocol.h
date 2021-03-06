//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class INImage, INPersonHandle, NSArray, NSPersonNameComponents, NSString;

@protocol INPersonExport <NSObject, JSExport>
@property(copy, nonatomic) NSArray *alternatives;
@property(nonatomic) _Bool isMe;
@property(nonatomic) long long suggestionType;
@property(copy, nonatomic) NSArray *aliases;
@property(copy, nonatomic) NSString *customIdentifier;
@property(copy, nonatomic) NSString *relationship;
@property(copy, nonatomic) NSString *contactIdentifier;
@property(copy, nonatomic) INImage *image;
@property(copy, nonatomic) NSString *displayName;
@property(copy, nonatomic) NSPersonNameComponents *nameComponents;
@property(copy, nonatomic) INPersonHandle *personHandle;
@property(copy, nonatomic) NSString *handle;
- (id)init;
@end

