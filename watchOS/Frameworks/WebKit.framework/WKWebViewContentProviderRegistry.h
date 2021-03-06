//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface WKWebViewContentProviderRegistry : NSObject
{
    struct HashMap<WTF::String, Class<WKWebViewContentProvider>, WTF::ASCIICaseInsensitiveHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<Class<WKWebViewContentProvider>>> _contentProviderForMIMEType;
    struct HashCountedSet<WebKit::WebPageProxy *, WTF::PtrHash<WebKit::WebPageProxy *>, WTF::HashTraits<WebKit::WebPageProxy *>> _pages;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (Vector_1e8b6c82)_mimeTypesWithCustomContentProviders;
- (Class)providerForMIMEType:(const struct String *)arg1;
- (void)registerProvider:(Class)arg1 forMIMEType:(const struct String *)arg2;
- (void)removePage:(struct WebPageProxy *)arg1;
- (void)addPage:(struct WebPageProxy *)arg1;
- (id)initWithConfiguration:(id)arg1;

@end

