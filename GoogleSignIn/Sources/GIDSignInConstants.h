/*
 * Copyright 2024 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <Foundation/Foundation.h>

/// The URL template for the authorization endpoint.
extern NSString *const kAuthorizationURLTemplate;

/// The URL template for the token endpoint.
extern NSString *const kTokenURLTemplate;

/// Expected path in the URL scheme to be handled.
extern NSString *const kBrowserCallbackPath;

/// The name of the audience parameter for the auth and token exchange endpoints.
extern NSString *const kAudienceParameter;

/// The name of the open ID realm parameter for the auth and token exchange endpoints.
extern NSString *const kOpenIDRealmParameter;

/// The name of the include granted scopes parameter for the auth and token exchange endpoints.
extern NSString *const kIncludeGrantedScopesParameter;

/// The name of the login hint parameter for the auth and token exchange endpoints.
extern NSString *const kLoginHintParameter;

/// The name of the hosted domain parameter for the auth and token exchange endpoints.
extern NSString *const kHostedDomainParameter;
