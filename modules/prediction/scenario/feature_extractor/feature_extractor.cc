/******************************************************************************
 * Copyright 2018 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

/**
 * @file
 */

#include "modules/prediction/scenario/feature_extractor/feature_extractor.h"

namespace apollo {
namespace prediction {

FeatureExtractor::FeatureExtractor() {
}

FeatureExtractor::~FeatureExtractor() {
}

void FeatureExtractor::ExtractFeatures() {
  SetADCFeature();
  SetLaneFeature();
  SetJunctionFeature();
  // TODO(all) other processes
}

const ScenarioFeature& FeatureExtractor::scenario_feature() const {
  return scenario_feature_;
}

void FeatureExtractor::SetADCFeature() {
  // TODO(all) implement ADC's dynamic features
}

void FeatureExtractor::SetLaneFeature() {
  // TODO(all) implement lane features of ADC
}

void FeatureExtractor::SetJunctionFeature() {
  // TODO(all) implement junction featues of ADC
}

}  // namespace prediction
}  // namespace apollo
